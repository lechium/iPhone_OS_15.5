//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIImage;

@interface RCPScreenSnapshot : NSObject
{
    unsigned long long _timestamp;	// 8 = 0x8
    UIImage *_snapshotImage;	// 16 = 0x10
    long long _index;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000937d
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) UIImage *snapshotImage; // @synthesize snapshotImage=_snapshotImage;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (id)description;	// IMP=0x00000000000092b6
- (id)init;	// IMP=0x0000000000009260

@end
