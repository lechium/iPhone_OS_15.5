//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface AAInviteCompletionInfo : NSObject
{
    unsigned long long _transportType;	// 8 = 0x8
    NSArray *_recipients;	// 16 = 0x10
    unsigned long long _status;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000003299
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(nonatomic) unsigned long long transportType; // @synthesize transportType=_transportType;

@end

