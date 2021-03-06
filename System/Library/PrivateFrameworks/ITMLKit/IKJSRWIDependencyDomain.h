//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface IKJSRWIDependencyDomain : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    Class _agentClass;	// 16 = 0x10
    NSDictionary *_types;	// 24 = 0x18
    NSDictionary *_commands;	// 32 = 0x20
    NSDictionary *_events;	// 40 = 0x28
}

+ (void)processDomains:(id)arg1;	// IMP=0x0000000000041681
+ (id)allDomains;	// IMP=0x0000000000041596
+ (id)domainAgentClassMap;	// IMP=0x0000000000041589
+ (id)allowedDomains;	// IMP=0x000000000004157c
- (void).cxx_destruct;	// IMP=0x0000000000042e30
@property(readonly, nonatomic) NSDictionary *events; // @synthesize events=_events;
@property(readonly, nonatomic) NSDictionary *commands; // @synthesize commands=_commands;
@property(readonly, nonatomic) NSDictionary *types; // @synthesize types=_types;
@property(retain, nonatomic) Class agentClass; // @synthesize agentClass=_agentClass;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (_Bool)isValidForEventsWithError:(id *)arg1;	// IMP=0x0000000000042a3c
- (_Bool)isValidForTypesWithError:(id *)arg1;	// IMP=0x000000000004268b
- (_Bool)isValidForAgentWithError:(id *)arg1;	// IMP=0x00000000000422b6
- (_Bool)isValidWithError:(id *)arg1;	// IMP=0x000000000004200f
@property(readonly, nonatomic) NSString *dispatcherClassString;
- (id)initWithDomainDictionary:(id)arg1 agentClass:(Class)arg2;	// IMP=0x000000000004193f

@end

