//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NUSingleSourceDefinition;

@interface NUScaledSourceDefinition
{
    NUSingleSourceDefinition *_source;	// 16 = 0x10
    CDStruct_d58201db _sourceSize;	// 24 = 0x18
    CDStruct_d58201db _fullSize;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000009718f
@property(readonly) CDStruct_912cb5d2 fullSize; // @synthesize fullSize=_fullSize;
@property(readonly) CDStruct_912cb5d2 sourceSize; // @synthesize sourceSize=_sourceSize;
@property(readonly) NUSingleSourceDefinition *source; // @synthesize source=_source;
- (id)description;	// IMP=0x000000000009708f
- (long long)mediaType;	// IMP=0x0000000000097072
- (CDStruct_912cb5d2)scale;	// IMP=0x0000000000097006
- (id)initWithSourceDefinition:(id)arg1 sourceSize:(CDStruct_912cb5d2)arg2 fullSize:(CDStruct_912cb5d2)arg3;	// IMP=0x0000000000096f7d
- (id)sourceContainerNodeWithIdentifier:(id)arg1 error:(out id *)arg2;	// IMP=0x000000000009340d

@end
