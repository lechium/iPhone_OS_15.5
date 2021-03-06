//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface AVTPuppetStore : NSObject
{
    NSArray *_puppetRecords;	// 8 = 0x8
}

+ (id)createPuppetRecords;	// IMP=0x0000000000008d76
- (void).cxx_destruct;	// IMP=0x0000000000009623
@property(copy, nonatomic) NSArray *puppetRecords; // @synthesize puppetRecords=_puppetRecords;
- (id)allAvatarPuppetsWithError:(id *)arg1;	// IMP=0x00000000000095c2
- (id)allAvatarPuppetsExcluding:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000093d5
- (id)avatarsWithIdentifiers:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000904c
- (id)avatarPuppetsForFetchRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000008f33
- (void)loadPuppetRecordsIfNeeded;	// IMP=0x0000000000008cee
- (id)allPuppetRecords;	// IMP=0x0000000000008c96
- (id)initWithEnvironment:(id)arg1;	// IMP=0x0000000000008c67

@end

