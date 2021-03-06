//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXMusicCurationResult-Protocol.h>

@class NSDictionary, NSError;

@interface _PXMusicCurationResult : NSObject <PXMusicCurationResult>
{
    _Bool _isComplete;	// 8 = 0x8
    NSDictionary *_songsByCategory;	// 16 = 0x10
    NSError *_error;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000005cf4d
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) _Bool isComplete; // @synthesize isComplete=_isComplete;
@property(copy, nonatomic) NSDictionary *songsByCategory; // @synthesize songsByCategory=_songsByCategory;
- (id)description;	// IMP=0x000000000005ce03
- (id)init;	// IMP=0x000000000005cdb2

@end

