//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface HFServiceNameComponents : NSObject
{
    NSString *_rawServiceName;	// 8 = 0x8
    NSString *_serviceName;	// 16 = 0x10
    NSString *_roomName;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002b557d
@property(retain, nonatomic) NSString *roomName; // @synthesize roomName=_roomName;
@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(retain, nonatomic) NSString *rawServiceName; // @synthesize rawServiceName=_rawServiceName;
- (unsigned long long)hash;	// IMP=0x00000000002b54e8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002b52c7
@property(readonly, nonatomic) NSString *composedString;
- (id)initWithRawServiceName:(id)arg1 rawRoomName:(id)arg2;	// IMP=0x00000000002b4c66

@end
