//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iWorkImport/GQDNameMappable-Protocol.h>

@class GQDColor, GQDFilteredImage, NSString;

__attribute__((visibility("hidden")))
@interface GQDTexturedImageFill : NSObject <GQDNameMappable>
{
    int mTechnique;	// 8 = 0x8
    GQDColor *mColor;	// 16 = 0x10
    GQDFilteredImage *mFilteredImage;	// 24 = 0x18
}

+ (const struct StateSpec *)stateForReading;	// IMP=0x0000000000013e0a
- (id)imageBinary;	// IMP=0x0000000000013e74
- (id)color;	// IMP=0x0000000000013e6a
- (int)technique;	// IMP=0x0000000000013e61
- (void)dealloc;	// IMP=0x0000000000013e17
- (void)setColor:(id)arg1;	// IMP=0x0000000000013ee2
- (void)invalidateFilteredImage;	// IMP=0x0000000000013ec0
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1 processor:(id)arg2;	// IMP=0x0000000000013e8a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

