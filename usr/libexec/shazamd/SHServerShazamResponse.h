//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface SHServerShazamResponse : NSObject
{
    NSDictionary *_shazamDictionary;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000003ba7
@property(retain, nonatomic) NSDictionary *shazamDictionary; // @synthesize shazamDictionary=_shazamDictionary;
- (id)itemForIdentifier:(id)arg1;	// IMP=0x0010000000003a8a
- (id)initWithShazamDictionary:(id)arg1;	// IMP=0x0010000000003a1f

@end

