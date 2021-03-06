//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NPKAssertion, NSMutableIndexSet;
@protocol OS_dispatch_queue;

@interface NPKDoubleClickClientSuppressor : NSObject
{
    NPKAssertion *_suppressionAssertion;	// 8 = 0x8
    NSMutableIndexSet *_suppressionRequestTokens;	// 16 = 0x10
    unsigned long long _nextSuppressionRequestToken;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_suppressorQueue;	// 32 = 0x20
}

+ (_Bool)isSuppressingDoubleClickClients;	// IMP=0x0000000000133dbe
+ (void)endDoubleClickClientSuppressionWithRequestToken:(unsigned long long)arg1;	// IMP=0x0000000000133d6b
+ (unsigned long long)requestDoubleClickClientSuppressionWithResponseHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000133cf0
+ (id)sharedInstance;	// IMP=0x0000000000133b0c
- (void).cxx_destruct;	// IMP=0x0000000000134781
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *suppressorQueue; // @synthesize suppressorQueue=_suppressorQueue;
@property(nonatomic) unsigned long long nextSuppressionRequestToken; // @synthesize nextSuppressionRequestToken=_nextSuppressionRequestToken;
@property(retain) NSMutableIndexSet *suppressionRequestTokens; // @synthesize suppressionRequestTokens=_suppressionRequestTokens;
@property(retain, nonatomic) NPKAssertion *suppressionAssertion; // @synthesize suppressionAssertion=_suppressionAssertion;
- (void)_postSuppressionStateChanged;	// IMP=0x00000000001346b0
- (void)_acquireSuppressionAssertionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000013459f
- (void)_acquireSuppressionAssertionIfNeededWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001344e8
- (_Bool)isSuppressingDoubleClickClients;	// IMP=0x00000000001342e4
- (void)endDoubleClickClientSuppressionWithRequestToken:(unsigned long long)arg1;	// IMP=0x00000000001340cb
- (unsigned long long)requestDoubleClickClientSuppressionWithResponseHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000133e09
- (void)dealloc;	// IMP=0x0000000000133c83
- (id)init;	// IMP=0x0000000000133b91

@end

