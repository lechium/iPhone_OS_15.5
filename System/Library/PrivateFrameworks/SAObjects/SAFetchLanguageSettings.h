//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSString;

@interface SAFetchLanguageSettings <SAServerBoundCommand>
{
}

+ (id)fetchLanguageSettingsWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000003f5f9
+ (id)fetchLanguageSettings;	// IMP=0x000000000003f5e7
- (_Bool)requiresResponse;	// IMP=0x000000000003f647
@property(copy, nonatomic) NSString *systemBuildPrefix;
@property(copy, nonatomic) NSString *idiom;
- (id)encodedClassName;	// IMP=0x000000000003f5da
- (id)groupIdentifier;	// IMP=0x000000000003f5c6

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

