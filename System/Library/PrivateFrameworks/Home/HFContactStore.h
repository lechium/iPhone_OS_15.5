//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactStore;

@interface HFContactStore : NSObject
{
    CNContactStore *_contactStore;	// 8 = 0x8
}

+ (id)defaultStore;	// IMP=0x0000000000057b57
- (void).cxx_destruct;	// IMP=0x00000000000587c3
@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (id)_fallbackContactWithEmailAddress:(id)arg1 phoneNumber:(id)arg2;	// IMP=0x00000000000585ce
- (id)contactForPhoneNumber:(id)arg1 withKeys:(id)arg2;	// IMP=0x00000000000582a1
- (id)contactForEmailAddress:(id)arg1 withKeys:(id)arg2;	// IMP=0x0000000000057f96
- (id)_meContactWithEmailAddress:(id)arg1 keys:(id)arg2;	// IMP=0x0000000000057d68
- (id)contactForUserHandle:(id)arg1 withKeys:(id)arg2;	// IMP=0x0000000000057c25
@property(readonly, nonatomic) CNContactStore *backingStore;
- (id)init;	// IMP=0x0000000000057bbd

@end

