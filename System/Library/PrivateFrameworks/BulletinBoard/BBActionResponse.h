//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BulletinBoard/NSSecureCoding-Protocol.h>

@class BSServiceConnectionEndpoint, NSDictionary, NSString, NSURL;

@interface BBActionResponse : NSObject <NSSecureCoding>
{
    _Bool _didOpenApplication;	// 8 = 0x8
    long long _actionType;	// 16 = 0x10
    unsigned long long _actionActivationMode;	// 24 = 0x18
    long long _actionBehavior;	// 32 = 0x20
    NSString *_actionID;	// 40 = 0x28
    NSURL *_actionLaunchURL;	// 48 = 0x30
    NSString *_bulletinRecordID;	// 56 = 0x38
    NSString *_bulletinPublisherID;	// 64 = 0x40
    NSDictionary *_bulletinContext;	// 72 = 0x48
    NSString *_bulletinButtonID;	// 80 = 0x50
    NSDictionary *_context;	// 88 = 0x58
    NSString *_originID;	// 96 = 0x60
    BSServiceConnectionEndpoint *_endpoint;	// 104 = 0x68
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000720c9
+ (id)actionResponseForResponse:(id)arg1 bulletinRequest:(id)arg2;	// IMP=0x0000000000071c66
- (void).cxx_destruct;	// IMP=0x000000000007283b
@property(copy, nonatomic) BSServiceConnectionEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(copy, nonatomic) NSString *originID; // @synthesize originID=_originID;
@property(copy, nonatomic) NSDictionary *context; // @synthesize context=_context;
@property(copy, nonatomic) NSString *bulletinButtonID; // @synthesize bulletinButtonID=_bulletinButtonID;
@property(copy, nonatomic) NSDictionary *bulletinContext; // @synthesize bulletinContext=_bulletinContext;
@property(copy, nonatomic) NSString *bulletinPublisherID; // @synthesize bulletinPublisherID=_bulletinPublisherID;
@property(copy, nonatomic) NSString *bulletinRecordID; // @synthesize bulletinRecordID=_bulletinRecordID;
@property(copy, nonatomic) NSURL *actionLaunchURL; // @synthesize actionLaunchURL=_actionLaunchURL;
@property(copy, nonatomic) NSString *actionID; // @synthesize actionID=_actionID;
@property(nonatomic) _Bool didOpenApplication; // @synthesize didOpenApplication=_didOpenApplication;
@property(nonatomic) long long actionBehavior; // @synthesize actionBehavior=_actionBehavior;
@property(nonatomic) unsigned long long actionActivationMode; // @synthesize actionActivationMode=_actionActivationMode;
@property(nonatomic) long long actionType; // @synthesize actionType=_actionType;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000072465
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000720d1
- (id)description;	// IMP=0x0000000000071f03

@end
