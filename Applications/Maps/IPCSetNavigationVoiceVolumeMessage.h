//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface IPCSetNavigationVoiceVolumeMessage
{
    NSString *_requestedVolume;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000009fbe33
@property(copy, nonatomic) NSString *requestedVolume; // @synthesize requestedVolume=_requestedVolume;
- (id)description;	// IMP=0x00100000009fbd62
- (id)dictionaryValue;	// IMP=0x00100000009fbc87
- (id)initWithDictionary:(id)arg1;	// IMP=0x00100000009fbbe8

@end

