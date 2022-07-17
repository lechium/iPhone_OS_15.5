//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSNumber, NSString, NSURL;

@interface SAAlarmSearch
{
}

+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000000a2ee
+ (id)search;	// IMP=0x000000000000a2dc
- (_Bool)mutatingCommand;	// IMP=0x000000000000a3ee
- (_Bool)requiresResponse;	// IMP=0x000000000000a3e6
@property(copy, nonatomic) NSNumber *minute;
@property(copy, nonatomic) NSString *label;
@property(copy, nonatomic) NSNumber *includesSleepAlarms;
@property(copy, nonatomic) NSURL *identifier;
@property(copy, nonatomic) NSNumber *hour;
@property(copy, nonatomic) NSArray *frequency;
@property(copy, nonatomic) NSNumber *enabled;
- (id)encodedClassName;	// IMP=0x000000000000a2cf
- (id)groupIdentifier;	// IMP=0x000000000000a2bb

@end
