//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface STStoragePlugin : NSObject
{
    NSArray *_tips;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000004288
- (long long)externDataSizeForApp:(id)arg1;	// IMP=0x0000000000004280
- (id)externDataSizeAppIdentifiers;	// IMP=0x0000000000004273
- (id)documentSpecifiersForApp:(id)arg1;	// IMP=0x0000000000004266
- (id)documentAppIdentifiers;	// IMP=0x0000000000004259
- (void)reloadSpecifiersForApp:(id)arg1;	// IMP=0x000000000000418d
- (void)reloadTips;	// IMP=0x0000000000004142
- (void)notifyUsageChanged;	// IMP=0x00000000000040fc
@property(retain) NSArray *tips;
@property(retain) NSString *identifier;

@end

