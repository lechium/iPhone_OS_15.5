//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/AMSSnapshotBag.h>

@class MISSING_TYPE, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface _TtC9JetEngine16OverriddenAMSBag : AMSSnapshotBag
{
    MISSING_TYPE *backing;	// 8 = 0x8
    MISSING_TYPE *overrides;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000122f40
- (id)initWithData:(id)arg1;	// IMP=0x0000000000123760
- (id)init;	// IMP=0x0000000000123730
- (void)createSnapshotWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000123600
- (id)dictionaryForKey:(id)arg1;	// IMP=0x0000000000123540
- (id)URLForKey:(id)arg1;	// IMP=0x0000000000123460
- (id)stringForKey:(id)arg1;	// IMP=0x0000000000123440
- (id)integerForKey:(id)arg1;	// IMP=0x0000000000123420
- (id)doubleForKey:(id)arg1;	// IMP=0x0000000000123400
- (id)boolForKey:(id)arg1;	// IMP=0x0000000000123370
- (id)arrayForKey:(id)arg1;	// IMP=0x0000000000123350
@property(nonatomic, readonly) NSString *profileVersion;
@property(nonatomic, readonly) NSString *profile;
@property(nonatomic, readonly) NSDate *expirationDate;
- (_Bool)isExpired;	// IMP=0x00000000001230e0
- (void)forwardSnapshotBagExpiredValueAccessed:(id)arg1;	// IMP=0x0000000000123040
- (void)dealloc;	// IMP=0x0000000000122ea0

// Remaining properties
@property(nonatomic, readonly) _Bool expired;

@end
