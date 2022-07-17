//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSUUID;

@interface PKHashtagItem
{
}

+ (id)hashtagItemWithQueryItem:(id)arg1 sessionManager:(id)arg2;	// IMP=0x00000000001a8ceb
- (id)description;	// IMP=0x00000000001a94d6
- (void)invalidateUUID;	// IMP=0x00000000001a94c2
- (id)_actionNameForActivation:(_Bool)arg1;	// IMP=0x00000000001a942a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001a9342
- (void)clearActiveInDrawing:(id)arg1;	// IMP=0x00000000001a8fc5
@property(readonly, nonatomic) _Bool active;
- (id)setActive:(_Bool)arg1;	// IMP=0x00000000001a8ef5
@property(readonly, nonatomic) NSUUID *hashtagUUID;
@property(readonly, nonatomic) NSString *hashtagResult;
- (id)strokeColor;	// IMP=0x00000000001a8e6d
- (id)_baselinePath;	// IMP=0x00000000001a8e09

@end
