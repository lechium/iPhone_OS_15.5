//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, SAMLEvidence;

__attribute__((visibility("hidden")))
@interface SAMLAuthZDecision
{
}

+ (id)createElement:(id *)arg1;	// IMP=0x000000000000964c
@property(readonly, nonatomic) SAMLEvidence *evidence;
@property(readonly, nonatomic) NSArray *actions;
@property(readonly, nonatomic) NSString *resource;
@property(readonly, nonatomic) NSString *decision;

@end
