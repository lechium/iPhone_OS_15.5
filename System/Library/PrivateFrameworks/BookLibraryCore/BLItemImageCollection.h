//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BookLibraryCore/NSCopying-Protocol.h>

@class NSArray;

@interface BLItemImageCollection : NSObject <NSCopying>
{
    NSArray *_itemImages;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000349c6
@property(readonly, nonatomic) NSArray *itemImages; // @synthesize itemImages=_itemImages;
- (id)_newImagesForDictionary:(id)arg1;	// IMP=0x000000000003465f
- (id)_imagesForSize:(struct CGSize)arg1 scale:(double)arg2;	// IMP=0x00000000000340a9
- (id)imagesForKind:(id)arg1;	// IMP=0x0000000000033ddc
- (id)imagesForSize:(struct CGSize)arg1;	// IMP=0x0000000000033c33
- (id)bestImageForSize:(struct CGSize)arg1;	// IMP=0x0000000000033bc9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000033b6e
- (id)initWithItemImages:(id)arg1;	// IMP=0x0000000000033afb
- (id)initWithImageCollection:(id)arg1;	// IMP=0x00000000000337de

@end
