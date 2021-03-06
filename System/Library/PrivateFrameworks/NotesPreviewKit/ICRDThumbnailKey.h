//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NotesPreviewKit/NSCopying-Protocol.h>

@class MISSING_TYPE, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface ICRDThumbnailKey : NSObject <NSCopying>
{
    MISSING_TYPE *accountId;	// 8 = 0x8
    MISSING_TYPE *objectId;	// 24 = 0x18
    MISSING_TYPE *thumbnailId;	// 40 = 0x28
}

+ (id)recentObjectId;	// IMP=0x00000000000031a0
- (void).cxx_destruct;	// IMP=0x0000000000004510
- (id)init;	// IMP=0x0000000000004320
@property(nonatomic, readonly) NSURL *imageUrl;
@property(nonatomic, readonly) NSURL *descriptionUrl;
@property(nonatomic, readonly) NSURL *containerUrl;
- (id)copyWithZone:(void *)arg1;	// IMP=0x0000000000003e20
@property(nonatomic, readonly) long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000003b10
@property(nonatomic, readonly) NSString *description;
- (id)initWithType:(long long)arg1 accountId:(id)arg2 objectId:(id)arg3 preferredSize:(struct CGSize)arg4 traitCollection:(id)arg5;	// IMP=0x00000000000035a0
- (id)initWithType:(long long)arg1 accountId:(id)arg2 objectId:(id)arg3 preferredSize:(struct CGSize)arg4 scale:(double)arg5 appearance:(unsigned long long)arg6;	// IMP=0x0000000000003480
- (id)initWithType:(long long)arg1 accountId:(id)arg2 objectId:(id)arg3 preferredSize:(struct CGSize)arg4 scale:(double)arg5 appearance:(unsigned long long)arg6 isRTL:(_Bool)arg7 contentSizeCategory:(id)arg8 hasBoldText:(_Bool)arg9 hasButtonShapes:(_Bool)arg10 hasDarkerSystemColors:(_Bool)arg11;	// IMP=0x0000000000003380
- (id)initWithAccountId:(id)arg1 objectId:(id)arg2 thumbnailId:(id)arg3;	// IMP=0x00000000000032b0
@property(nonatomic, readonly) NSString *thumbnailId;
@property(nonatomic, readonly) NSString *objectId;
@property(nonatomic, readonly) NSString *accountId;

@end

