//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <OfficeImport/NSCopying-Protocol.h>

@class NSMutableArray, NSString, WDDocument;

__attribute__((visibility("hidden")))
@interface WDListDefinition : NSObject <NSCopying>
{
    WDDocument *mDocument;	// 8 = 0x8
    int mListDefinitionId;	// 16 = 0x10
    NSString *mStyleId;	// 24 = 0x18
    NSString *mStyleRefId;	// 32 = 0x20
    int mType;	// 40 = 0x28
    NSMutableArray *mLevels;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000003faf70
@property(copy, nonatomic) NSString *styleRefId; // @synthesize styleRefId=mStyleRefId;
@property(readonly, nonatomic) NSString *styleId; // @synthesize styleId=mStyleId;
@property(readonly, nonatomic) int listDefinitionId; // @synthesize listDefinitionId=mListDefinitionId;
- (id)description;	// IMP=0x00000000003faf06
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003faefb
- (id)initWithDocument:(id)arg1 listDefinitionId:(int)arg2 styleId:(id)arg3;	// IMP=0x00000000003fae25
- (void)removeLastLevel;	// IMP=0x00000000003fae0f
- (id)addLevel;	// IMP=0x00000000000d255d
- (id)levelAt:(int)arg1;	// IMP=0x00000000000f48b3
- (int)levelCount;	// IMP=0x00000000000f489d
- (void)setType:(int)arg1;	// IMP=0x00000000000d2c54
- (int)type;	// IMP=0x00000000003fae06

@end
