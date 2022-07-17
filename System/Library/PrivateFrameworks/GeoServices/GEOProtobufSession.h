//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol GEODataSession;

@interface GEOProtobufSession : NSObject
{
    id <GEODataSession> _dataSession;	// 8 = 0x8
}

+ (id)sharedDelegateQueue;	// IMP=0x0000000000f34654
+ (id)sharedProtobufSession;	// IMP=0x0000000000f34570
- (void).cxx_destruct;	// IMP=0x0000000000f348dc
@property(readonly, nonatomic) id <GEODataSession> dataSession; // @synthesize dataSession=_dataSession;
- (id)taskWithRequest:(id)arg1 requestTypeCode:(unsigned int)arg2 responseClass:(Class)arg3 delegate:(id)arg4 delegateQueue:(id)arg5;	// IMP=0x0000000000f3475a
- (id)initWithDataSession:(id)arg1;	// IMP=0x0000000000f346a9
- (id)init;	// IMP=0x0000000000f34646
- (id)taskWithRequestKind:(CDStruct_d1a7ebee)arg1 protobufRequest:(id)arg2 URL:(id)arg3 additionalHTTPHeaders:(id)arg4 needsProxy:(_Bool)arg5 auditToken:(id)arg6 traits:(id)arg7 delegate:(id)arg8 delegateQueue:(id)arg9 requestCounterTicket:(id)arg10 multipathServiceType:(unsigned long long)arg11 multipathAlternatePort:(unsigned long long)arg12 throttleToken:(id)arg13;	// IMP=0x00000000012ed3ed

@end
