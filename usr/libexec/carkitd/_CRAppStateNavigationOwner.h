//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection;

@interface _CRAppStateNavigationOwner : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000024d82
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (unsigned long long)hash;	// IMP=0x0010000000024cc1
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000024c5a
- (_Bool)isEqualToOwner:(id)arg1;	// IMP=0x0010000000024b6d
- (id)description;	// IMP=0x0010000000024ab7

@end

