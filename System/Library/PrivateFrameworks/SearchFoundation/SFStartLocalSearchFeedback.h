//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SFIndexState, SFPerformEntityQueryCommand;

@interface SFStartLocalSearchFeedback
{
    unsigned long long _indexType;	// 56 = 0x38
    NSString *_originatingApp;	// 64 = 0x40
    SFPerformEntityQueryCommand *_entityQueryCommand;	// 72 = 0x48
    SFIndexState *_indexState;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001e03fd
- (void).cxx_destruct;	// IMP=0x00000000001e03bb
@property(retain, nonatomic) SFIndexState *indexState; // @synthesize indexState=_indexState;
@property(copy, nonatomic) SFPerformEntityQueryCommand *entityQueryCommand; // @synthesize entityQueryCommand=_entityQueryCommand;
@property(copy, nonatomic) NSString *originatingApp; // @synthesize originatingApp=_originatingApp;
@property(nonatomic) unsigned long long indexType; // @synthesize indexType=_indexType;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001e0290
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001e01dd
- (id)initWithEntityQueryCommand:(id)arg1 triggerEvent:(unsigned long long)arg2 searchType:(unsigned long long)arg3 indexType:(unsigned long long)arg4 queryId:(unsigned long long)arg5 originatingApp:(id)arg6;	// IMP=0x00000000001e0114
- (id)initWithInput:(id)arg1 triggerEvent:(unsigned long long)arg2 searchType:(unsigned long long)arg3 indexType:(unsigned long long)arg4 queryId:(unsigned long long)arg5 originatingApp:(id)arg6;	// IMP=0x00000000001e008b
- (id)initWithInput:(id)arg1 triggerEvent:(unsigned long long)arg2 searchType:(unsigned long long)arg3 indexType:(unsigned long long)arg4 queryId:(unsigned long long)arg5;	// IMP=0x00000000001dfffe
- (id)initWithInput:(id)arg1 triggerEvent:(unsigned long long)arg2 indexType:(unsigned long long)arg3 queryId:(unsigned long long)arg4;	// IMP=0x00000000001dffd6
- (id)initWithInput:(id)arg1 triggerEvent:(unsigned long long)arg2 indexType:(unsigned long long)arg3;	// IMP=0x00000000001dffad

@end

