//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DataAccessExpress/NSSecureCoding-Protocol.h>

@class NSString;

@interface DAECalendarDirectorySearchResult : NSObject <NSSecureCoding>
{
    NSString *_displayName;	// 8 = 0x8
    NSString *_firstName;	// 16 = 0x10
    NSString *_lastName;	// 24 = 0x18
    NSString *_preferredAddress;	// 32 = 0x20
    NSString *_principalPath;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000027f93
- (void).cxx_destruct;	// IMP=0x000000000002832c
@property(retain, nonatomic) NSString *principalPath; // @synthesize principalPath=_principalPath;
@property(retain, nonatomic) NSString *preferredAddress; // @synthesize preferredAddress=_preferredAddress;
@property(retain, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(retain, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000028159
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000027f9b
- (id)description;	// IMP=0x0000000000027e96

@end

