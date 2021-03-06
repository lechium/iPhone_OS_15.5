//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactStore, CNMonogrammer, NSDictionary;

@interface HUContactManager : NSObject
{
    NSDictionary *_cachedContactByEmails;	// 8 = 0x8
    CNContactStore *_contactStore;	// 16 = 0x10
    CNMonogrammer *_monogrammer;	// 24 = 0x18
    double _monogramDiameter;	// 32 = 0x20
}

+ (id)sharedManager;	// IMP=0x00000000004310c0
- (void).cxx_destruct;	// IMP=0x0000000000431ce3
@property(nonatomic) double monogramDiameter; // @synthesize monogramDiameter=_monogramDiameter;
@property(retain, nonatomic) CNMonogrammer *monogrammer; // @synthesize monogrammer=_monogrammer;
@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(copy, nonatomic) NSDictionary *cachedContactByEmails; // @synthesize cachedContactByEmails=_cachedContactByEmails;
- (id)userDataFromEmail:(id)arg1 monogramDiameter:(double)arg2;	// IMP=0x000000000043181c
- (id)contactForEmailAddress:(id)arg1 keysToFetch:(id)arg2;	// IMP=0x00000000004312cb
- (void)contactStoreDidChange:(id)arg1;	// IMP=0x000000000043124f
- (void)dealloc;	// IMP=0x00000000004311da
- (id)init;	// IMP=0x0000000000431115

@end

