//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BookCoverUtility/NSObject-Protocol.h>

@protocol BCUPurgeableImage <NSObject>
@property(readonly, nonatomic) id layerContents;
@property(readonly, nonatomic) struct CGSize size;
@property(readonly, nonatomic) struct CGImage *CGImage;
@property(readonly, nonatomic) double contentsScale;
- (_Bool)markAsNonVolatile;
- (_Bool)markAsVolatile;
@end

