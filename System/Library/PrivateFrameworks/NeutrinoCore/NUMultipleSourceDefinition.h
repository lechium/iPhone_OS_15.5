//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface NUMultipleSourceDefinition
{
    NSArray *_sourceDefinitions;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000996c5
@property(readonly) NSArray *sourceDefinitions; // @synthesize sourceDefinitions=_sourceDefinitions;
- (id)description;	// IMP=0x0000000000099518
- (long long)mediaType;	// IMP=0x000000000009945a
- (id)initWithSourceDefinitions:(id)arg1;	// IMP=0x00000000000990a2
- (id)init;	// IMP=0x0000000000098d2f
- (id)sourceContainerNodeWithIdentifier:(id)arg1 error:(out id *)arg2;	// IMP=0x0000000000093a4c

@end
