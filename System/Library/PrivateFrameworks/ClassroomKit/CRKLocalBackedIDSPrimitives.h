//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKIDSPrimitives-Protocol.h>

@class CATOperationQueue, NSDictionary;
@protocol CRKIDSLocalPrimitives;

@interface CRKLocalBackedIDSPrimitives : NSObject <CRKIDSPrimitives>
{
    NSObject<CRKIDSLocalPrimitives> *_IDSLocalPrimitives;	// 8 = 0x8
    CATOperationQueue *_operationQueue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000072057
@property(readonly, nonatomic) CATOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, nonatomic) NSObject<CRKIDSLocalPrimitives> *IDSLocalPrimitives; // @synthesize IDSLocalPrimitives=_IDSLocalPrimitives;
- (id)operationDebugInfo;	// IMP=0x0000000000071fad
@property(readonly, copy, nonatomic) NSDictionary *debugInfo;
- (void)subscribeToMessagesWithHandler:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000071df8
- (void)sendMessage:(id)arg1 destinationAddress:(id)arg2 sourceAppleID:(id)arg3 options:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000071ad5
- (void)sendMessage:(id)arg1 destinationAddress:(id)arg2 sourceAppleID:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000071a15
- (id)initWithIDSLocalPrimitives:(id)arg1 operationQueue:(id)arg2;	// IMP=0x000000000007197c
- (id)initWithIDSLocalPrimitives:(id)arg1;	// IMP=0x00000000000718fb

@end

