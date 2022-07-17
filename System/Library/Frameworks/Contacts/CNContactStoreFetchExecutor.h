//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Contacts/CNFetchRequestVisitor-Protocol.h>

@class CNContactStore, CNResult, NSString;

__attribute__((visibility("hidden")))
@interface CNContactStoreFetchExecutor : NSObject <CNFetchRequestVisitor>
{
    CNContactStore *_store;	// 8 = 0x8
    CNResult *_result;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000761d5
@property(retain) CNResult *result; // @synthesize result=_result;
@property(readonly) CNContactStore *store; // @synthesize store=_store;
- (void)visitChangeHistoryFetchRequest:(id)arg1;	// IMP=0x000000000007609e
- (void)visitContactFetchRequest:(id)arg1;	// IMP=0x0000000000075f29
- (id)countForFetchRequest:(id)arg1;	// IMP=0x0000000000075e57
- (id)executeFetchRequest:(id)arg1;	// IMP=0x0000000000075d85
- (id)initWithContactStore:(id)arg1;	// IMP=0x0000000000075cf5
- (id)init;	// IMP=0x0000000000075cb8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
