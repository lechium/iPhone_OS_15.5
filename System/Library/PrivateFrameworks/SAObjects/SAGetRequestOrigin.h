//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

@interface SAGetRequestOrigin
{
}

+ (id)getRequestOriginWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000035003
+ (id)getRequestOrigin;	// IMP=0x0000000000034ff1
- (_Bool)mutatingCommand;	// IMP=0x000000000003507b
- (_Bool)requiresResponse;	// IMP=0x0000000000035073
@property(copy, nonatomic) NSNumber *searchTimeout;
@property(copy, nonatomic) NSNumber *maxAge;
@property(copy, nonatomic) NSString *desiredAccuracy;
- (id)encodedClassName;	// IMP=0x0000000000034fe4
- (id)groupIdentifier;	// IMP=0x0000000000034fd0

@end

