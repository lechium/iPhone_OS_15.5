//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AVTColorLayerProvider : NSObject
{
}

- (void)renderColorGradientForModelColor:(id)arg1 skinColor:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000abed4
- (void)renderColorForColorPreset:(id)arg1 skinColor:(id)arg2 intoLayer:(id)arg3;	// IMP=0x00000000000abebc
- (CDUnknownBlockType)providerForGradientFromColor;	// IMP=0x00000000000abe47
- (CDUnknownBlockType)providerForColorIntoLayer;	// IMP=0x00000000000abdd2

@end
