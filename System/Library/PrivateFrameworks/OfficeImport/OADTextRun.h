//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class OADCharacterProperties;

__attribute__((visibility("hidden")))
@interface OADTextRun : NSObject
{
    OADCharacterProperties *mProperties;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000033015f
- (id)description;	// IMP=0x0000000000330121
- (_Bool)isSimilarToTextRun:(id)arg1;	// IMP=0x00000000003300c5
- (void)removeUnnecessaryOverrides;	// IMP=0x0000000000033cd4
- (void)setProperties:(id)arg1;	// IMP=0x00000000003300b4
- (id)properties;	// IMP=0x000000000002d559
- (unsigned long long)characterCount;	// IMP=0x00000000003300ac
- (_Bool)isEmpty;	// IMP=0x00000000003300a4
- (id)init;	// IMP=0x000000000002d4e5

@end
