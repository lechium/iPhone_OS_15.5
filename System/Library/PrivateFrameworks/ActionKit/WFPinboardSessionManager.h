//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDateFormatter, NSString, NSURL, NSURLSession;

@interface WFPinboardSessionManager : NSObject
{
    NSURLSession *_session;	// 8 = 0x8
    NSString *_username;	// 16 = 0x10
    NSString *_password;	// 24 = 0x18
    NSString *_apiToken;	// 32 = 0x20
    NSURL *_baseURL;	// 40 = 0x28
    NSDateFormatter *_dateTimeFormatter;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000314d16
@property(readonly, nonatomic) NSDateFormatter *dateTimeFormatter; // @synthesize dateTimeFormatter=_dateTimeFormatter;
@property(readonly, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(copy, nonatomic) NSString *apiToken; // @synthesize apiToken=_apiToken;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, nonatomic) NSURLSession *session; // @synthesize session=_session;
- (id)authenticatedTaskWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000314729
- (void)getModifiedDateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000314620
- (void)getBookmarksWithTags:(id)arg1 limit:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000003143c5
- (void)addBookmark:(id)arg1 withTitle:(id)arg2 parameters:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000313eb3
- (id)initWithSession:(id)arg1;	// IMP=0x0000000000313cc5
- (id)initWithSessionConfiguration:(id)arg1;	// IMP=0x0000000000313c11
- (id)init;	// IMP=0x0000000000313bfd

@end

