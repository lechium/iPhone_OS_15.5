//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_xpc_object;

@interface DELogMover : NSObject
{
    NSObject<OS_xpc_object> *_conn;	// 8 = 0x8
    NSString *_serviceName;	// 16 = 0x10
}

+ (void)moveSystemLogsWithExtensions:(id)arg1;	// IMP=0x000000000000bd92
- (void).cxx_destruct;	// IMP=0x000000000000bf71
@property(readonly, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (_Bool)sendRequestReturningBooleanResponse:(id)arg1 withSuccessKey:(char *)arg2;	// IMP=0x000000000000ba49
- (id)initWithServiceName:(id)arg1;	// IMP=0x000000000000b9bf

@end

