//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSURL;

@interface PXFileBackedAssetDescription : NSObject
{
    NSMutableDictionary *_descriptionDictionary;	// 8 = 0x8
    NSURL *_url;	// 16 = 0x10
}

+ (id)simpleImageDescriptionWithURL:(id)arg1;	// IMP=0x0000000000532c57
- (void).cxx_destruct;	// IMP=0x0000000000532c2f
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;	// IMP=0x0000000000532c0f
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x0000000000532bf9
- (id)description;	// IMP=0x0000000000532b54
- (id)initWithURL:(id)arg1;	// IMP=0x0000000000532a49
- (id)init;	// IMP=0x00000000005329cf

@end
