//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SafariShared/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface WBSHistoryNotification : NSObject <NSSecureCoding>
{
    NSString *_name;	// 8 = 0x8
    NSDictionary *_userInfo;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000ded4c
- (void).cxx_destruct;	// IMP=0x00000000000dee8d
@property(readonly, copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000dee0b
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ded54
- (id)description;	// IMP=0x00000000000deccf
- (id)initWithName:(id)arg1 userInfo:(id)arg2;	// IMP=0x00000000000dec07
- (id)init;	// IMP=0x00000000000debf9

@end

