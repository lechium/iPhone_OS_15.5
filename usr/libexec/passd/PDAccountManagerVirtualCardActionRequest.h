//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet, NSString;

@interface PDAccountManagerVirtualCardActionRequest : NSObject
{
    NSMutableSet *_completionHandlers;	// 8 = 0x8
    long long _action;	// 16 = 0x10
    NSString *_virtualCardIdentifier;	// 24 = 0x18
    NSString *_accountIdentifier;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000003679e9
@property(readonly, copy, nonatomic) NSSet *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(readonly, copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(copy, nonatomic) NSString *virtualCardIdentifier; // @synthesize virtualCardIdentifier=_virtualCardIdentifier;
@property(nonatomic) long long action; // @synthesize action=_action;
@property(readonly, copy) NSString *description;
- (void)callCompletionsWithVirtualCard:(id)arg1 account:(id)arg2 error:(id)arg3;	// IMP=0x00100000003676b1
- (void)addCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000367671
- (_Bool)coalesceWithRequest:(id)arg1;	// IMP=0x0010000000367408
- (id)requestIdentifier;	// IMP=0x001000000036735a
- (unsigned long long)requestType;	// IMP=0x001000000036734f
- (id)initWithAccountIdentifier:(id)arg1;	// IMP=0x00100000003672ca

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

