//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface TFFeedbackEntryShortText
{
    NSString *_placeholder;	// 8 = 0x8
    unsigned long long _contentType;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001171a
@property(readonly, nonatomic) unsigned long long contentType; // @synthesize contentType=_contentType;
@property(readonly, copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 placeholder:(id)arg3 contentType:(unsigned long long)arg4;	// IMP=0x0000000000011656

@end
