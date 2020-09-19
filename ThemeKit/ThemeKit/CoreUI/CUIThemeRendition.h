/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreUI/CUIRenditionKey.h>

@class CUIThemeGradient, CUIThemeDataEffectPreset, CUIRenditionMetrics, CUIRenditionSliceInformation;
// Not exported
@interface CUIThemeRendition : NSObject
{
    struct renditionkeytoken _stackKey[16];
    struct renditionkeytoken *_key;
    long long _type;
    unsigned int _subtype;
    unsigned int _scale;
    struct {
        unsigned int isHeaderFlaggedFPO:1;
        unsigned int isExcludedFromContrastFilter:1;
        unsigned int isVectorBased:1;
        unsigned int isOpaque:1;
        unsigned int bitmapEncoding:4;
        unsigned int reserved:24;
    } _renditionFlags;
    CoreThemeTemplateRenderingMode _templateRenderingMode;
    long long _artworkStatus;
    unsigned long long _colorSpaceID;
    NSString *_name;
    NSData *_srcData;
    long long _validLookGradation;
    NSString *_utiType;
}

+ (NSString *)displayNameForRenditionType:(CoreThemeType)type;
+ (NSData *)filteredCSIDataFromBaseCSIData:(NSData *)csiData;
+ (Class)renditionClassForRenditionType:(CoreThemeType)type andPixelFormat:(unsigned int)format;

@property(nonatomic) TKEXIFOrientation exifOrientation; // @synthesize exifOrientation=_exifOrientation;
@property(nonatomic) CGBlendMode blendMode; // @synthesize blendMode=_blendMode;
@property(nonatomic) CGFloat opacity; // @synthesize opacity=_opacity;

- (unsigned short)valueForTokenIdentifier:(TKThemeAttribute)identifier;
- (CGRect)alphaCroppedRect;
- (CGSize)originalUncroppedSize;

- (id)layerReferences;
- (id)externalTags;
- (id)assetPackIdentifier;
// Used for raw data
- (NSData *)data;

- (CGImageRef)createImageFromPDFRenditionWithScale:(CGFloat)scale;
- (CGPDFDocumentRef)pdfDocument;

- (unsigned int)subtype;

- (CUIGradientStyle)gradientStyle;
- (CUIThemeGradient *)gradient;
- (CGFloat)gradientDrawingAngle;
- (CUIThemeDataEffectPreset *)effectPreset;

// Not sure what this is used for
// I've only seen it on for WindowShapeEdges
// which are edge masks
// So it could be that there 'is no content'
- (BOOL)edgesOnly;

// Describes stretching mode
// In the case of 9-part images, describes how
// the center slice is expanded
- (BOOL)isScaled;
// Only relevant on 1 or 9-part assets
- (BOOL)isTiled;

- (CUIRenditionSliceInformation *)sliceInformation;
- (CUIRenditionMetrics *)metrics;
- (CGFloat)scale;
- (id)maskForSliceIndex:(long long)arg1;
- (id)imageForSliceIndex:(long long)arg1;
- (CGImageRef)unslicedImage;
- (BOOL)isValidForLookGradation:(long long)arg1;
- (unsigned long long)colorSpaceID;

- (long long)artworkStatus;
- (CoreThemeTemplateRenderingMode)templateRenderingMode;
- (int)bitmapEncoding;
- (BOOL)isOpaque;
- (BOOL)isVectorBased;
- (BOOL)isHeaderFlaggedFPO;

- (NSString *)utiType;
- (NSString *)name;
- (CoreThemeType)type;

- (const struct renditionkeytoken *)key;
- (CUIRenditionKey *)linkingToRendition;
- (BOOL)isInternalLink;
- (CSIPixelFormat)pixelFormat;

- (instancetype)initWithCSIData:(NSData *)arg1 forKey:(const struct renditionkeytoken *)arg2 artworkStatus:(long long)arg3;
- (instancetype)initWithCSIData:(NSData *)arg1 forKey:(const struct renditionkeytoken *)arg2;

- (void)_initializeRenditionKey:(const struct renditionkeytoken *)arg1;
- (instancetype)_initWithCSIData:(NSData *)arg1 forKey:(const struct renditionkeytoken *)arg2 artworkStatus:(long long)arg3;
- (instancetype)_initWithCSIHeader:(const struct csiheader *)arg1;

- (void)_initalizeMetadataFromCSIData:(const struct csiheader *)arg1;
- (void)_initializeCompositingOptionsFromCSIData:(const struct csiheader *)arg1;
- (void)_initializeTypeIdentifiersWithLayout:(unsigned short)arg1;
- (void)_setStructuredThemeStore:(id)arg1;

@end
