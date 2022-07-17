//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PHASESamplerNodeDefinition
{
    NSString *_assetIdentifier;	// 80 = 0x50
    long long _cullOption;	// 88 = 0x58
    long long _playbackMode;	// 96 = 0x60
    NSString *_assetUID;	// 104 = 0x68
}

+ (id)new;	// IMP=0x000000000011d978
- (void).cxx_destruct;	// IMP=0x000000000011dc19
@property(readonly, nonatomic) NSString *assetUID; // @synthesize assetUID=_assetUID;
@property(nonatomic) long long playbackMode; // @synthesize playbackMode=_playbackMode;
@property(nonatomic) long long cullOption; // @synthesize cullOption=_cullOption;
@property(readonly, nonatomic) NSString *assetIdentifier; // @synthesize assetIdentifier=_assetIdentifier;
@property(nonatomic) long long playbackType; // @dynamic playbackType;
- (id)initWithSoundAssetIdentifier:(id)arg1 mixerDefinition:(id)arg2;	// IMP=0x000000000011da83
- (id)initWithSoundAssetUID:(id)arg1 mixerDefinition:(id)arg2;	// IMP=0x000000000011da71
- (id)initWithSoundAssetIdentifier:(id)arg1 mixerDefinition:(id)arg2 identifier:(id)arg3;	// IMP=0x000000000011d9a2
- (id)initWithSoundAssetUID:(id)arg1 mixerDefinition:(id)arg2 uid:(id)arg3;	// IMP=0x000000000011d990
- (id)init;	// IMP=0x000000000011d93a

@end
