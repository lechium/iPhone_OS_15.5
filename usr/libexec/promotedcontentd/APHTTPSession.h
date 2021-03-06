//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURLSession;

@interface APHTTPSession : NSObject
{
    NSURLSession *_session;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000cee0f
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
- (id)HEAD:(id)arg1 headers:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000ced16
- (id)POST:(id)arg1 headers:(id)arg2 body:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000cec27
- (id)GET:(id)arg1 headers:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000ceb56
- (id)sendRequest:(id)arg1;	// IMP=0x00100000000ce61f
- (void)invalidateSessionAndCancelTasks:(_Bool)arg1;	// IMP=0x00100000000ce5c5
- (void)cancelTaskWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ce35f
- (id)initWithSessionConfiguration:(id)arg1;	// IMP=0x00100000000ce2ad
- (id)init;	// IMP=0x00100000000ce27c

@end

