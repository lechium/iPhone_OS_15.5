//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iWorkImport/GQDNameMappable-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GQDWPLineSpacing : NSObject <GQDNameMappable>
{
    int mMode;	// 8 = 0x8
    float mAmount;	// 12 = 0xc
}

+ (const struct StateSpec *)stateForReading;	// IMP=0x000000000002003b
- (float)amount;	// IMP=0x0000000000020093
- (int)mode;	// IMP=0x000000000002008a
- (id)init;	// IMP=0x0000000000020048
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1 processor:(id)arg2;	// IMP=0x000000000002009e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

