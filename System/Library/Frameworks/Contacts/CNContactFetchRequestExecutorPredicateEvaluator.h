//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Contacts/CNPredicateVisitor-Protocol.h>

@class CNContactFetchRequest, CNObservable, NSString;
@protocol CNDataMapper;

__attribute__((visibility("hidden")))
@interface CNContactFetchRequestExecutorPredicateEvaluator : NSObject <CNPredicateVisitor>
{
    CNContactFetchRequest *_fetchRequest;	// 8 = 0x8
    id <CNDataMapper> _dataMapper;	// 16 = 0x10
    CNObservable *_observable;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000b5a3b
- (id)copyFetchRequestWithPredicate:(id)arg1;	// IMP=0x00000000000b59d8
- (id)evaluateSubpredicate:(id)arg1;	// IMP=0x00000000000b58a9
- (void)visitFalsePredicate:(id)arg1;	// IMP=0x00000000000b5870
- (void)visitTruePredicate:(id)arg1;	// IMP=0x00000000000b585c
- (void)visitNSPredicate:(id)arg1;	// IMP=0x00000000000b54af
- (void)visitNotPredicate:(id)arg1;	// IMP=0x00000000000b4f35
- (void)visitAndPredicate:(id)arg1;	// IMP=0x00000000000b48de
- (void)visitOrPredicate:(id)arg1;	// IMP=0x00000000000b43db
- (void)visitNSCompoundPredicate:(id)arg1;	// IMP=0x00000000000b4388
- (void)visitCNPredicate:(id)arg1;	// IMP=0x00000000000b432b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

