//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PSIReusableObject : NSObject
{
    _Bool _isPreparedForReuse;	// 8 = 0x8
    _Bool _isPreparingFromStatement;	// 9 = 0x9
    _Bool _isPreparedFromStatement;	// 10 = 0xa
}

@property(readonly, nonatomic) _Bool isPreparedFromStatement; // @synthesize isPreparedFromStatement=_isPreparedFromStatement;
- (void)didPrepareFromStatement:(struct sqlite3_stmt *)arg1;	// IMP=0x00000000004e169a
- (void)prepareFromStatement:(struct sqlite3_stmt *)arg1;	// IMP=0x00000000004e15b5
- (void)prepareForReuse;	// IMP=0x00000000004e15a5
- (id)init;	// IMP=0x00000000004e156d

@end
