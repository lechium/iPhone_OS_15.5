//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKInternetDateFetching-Protocol.h>
#import <ClassroomKit/NSURLSessionDataDelegate-Protocol.h>

@class NSMutableDictionary, NSString, NSURLSession;

@interface CRKInternetDateProvider : NSObject <NSURLSessionDataDelegate, CRKInternetDateFetching>
{
    NSURLSession *_session;	// 8 = 0x8
    NSMutableDictionary *_completionHandlerTable;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000009ef46
@property(retain, nonatomic) NSMutableDictionary *completionHandlerTable; // @synthesize completionHandlerTable=_completionHandlerTable;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
- (void)callAndRemoveCompletionHandlerWithDate:(id)arg1 error:(id)arg2 task:(id)arg3;	// IMP=0x000000000009ece4
- (void)storeCompletionHandler:(CDUnknownBlockType)arg1 forTask:(id)arg2;	// IMP=0x000000000009ec5e
- (void)internetDateRequestDidReceiveTask:(id)arg1;	// IMP=0x000000000009e97d
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x000000000009e94a
- (void)fetchInternetDateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000009e721
- (id)init;	// IMP=0x000000000009e6cb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

