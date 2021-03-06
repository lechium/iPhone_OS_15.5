//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class INPlayMediaIntent, MRArtwork, NSString;

@interface MRMediaSuggestion : NSObject
{
    NSString *_bundleID;	// 8 = 0x8
    MRArtwork *_artwork;	// 16 = 0x10
    INPlayMediaIntent *_intent;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000027e41
@property(readonly, nonatomic) MRArtwork *artwork;
@property(readonly, nonatomic) NSString *bundleID;
- (void)playOnEndpoint:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000267a9
- (void)playOnDeviceWithUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000025fd7
- (void)playWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000025d47
- (unsigned long long)hash;	// IMP=0x00000000000258ce
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002579b
- (id)description;	// IMP=0x00000000000255a0
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSString *artist;
@property(readonly, nonatomic) NSString *identifier;
- (id)initWithIntent:(id)arg1;	// IMP=0x0000000000025349

@end

