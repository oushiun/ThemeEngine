//
//  RBLClipView.m
//  Rebel
//
//  Created by Justin Spahr-Summers on 2012-09-14.
//  Copyright (c) 2012 GitHub. All rights reserved.
//

#import "RBLClipView.h"

@implementation RBLClipView

#pragma mark Properties

@dynamic layer;

- (NSColor *)backgroundColor {
    if (self.layer.backgroundColor)
        return [NSColor colorWithCGColor:self.layer.backgroundColor];
    return nil;
}

- (void)setBackgroundColor:(NSColor *)color {
    self.layer.backgroundColor = color.CGColor;
}

- (BOOL)isOpaque {
    return self.layer.opaque;
}

- (void)setOpaque:(BOOL)opaque {
    self.layer.opaque = opaque;
}

#pragma mark Lifecycle

- (id)initWithFrame:(NSRect)frame {
    self = [super initWithFrame:frame];
    if (self == nil) return nil;
    
    self.layer = [CAScrollLayer layer];
    self.wantsLayer = YES;
    
    self.layerContentsRedrawPolicy = NSViewLayerContentsRedrawNever;
    
    // Matches default NSClipView settings.
    self.backgroundColor = NSColor.clearColor;
    self.opaque = NO;
    
    return self;
}

@end