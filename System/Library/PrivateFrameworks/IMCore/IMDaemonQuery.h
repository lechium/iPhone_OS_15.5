//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface IMDaemonQuery : NSObject
{
    NSString *_ID;	// 8 = 0x8
    NSString *_key;	// 16 = 0x10
    NSDate *_startDate;	// 24 = 0x18
    CDUnknownBlockType _completionHandler;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000a4301
@property(readonly, copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, copy, nonatomic) NSString *ID; // @synthesize ID=_ID;
- (id)description;	// IMP=0x00000000000a41d8
- (id)initWithID:(id)arg1 key:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000a40cb

@end

