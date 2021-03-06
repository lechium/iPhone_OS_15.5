//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PDUserNotificationData : NSObject
{
    NSString *_title;	// 8 = 0x8
    NSString *_message;	// 16 = 0x10
    NSString *_handoutID;	// 24 = 0x18
    NSString *_classID;	// 32 = 0x20
    long long _type;	// 40 = 0x28
    NSString *_attachmentID;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000145226
@property(copy, nonatomic) NSString *attachmentID; // @synthesize attachmentID=_attachmentID;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *classID; // @synthesize classID=_classID;
@property(copy, nonatomic) NSString *handoutID; // @synthesize handoutID=_handoutID;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)description;	// IMP=0x0010000000145104
- (id)initWithType:(long long)arg1 title:(id)arg2 message:(id)arg3;	// IMP=0x0010000000145074
- (id)initWithType:(long long)arg1;	// IMP=0x0010000000145037

@end

