//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreDAV/CoreDAVItem.h>

@class NSString;

@interface CalDAVCalendarColorItem : CoreDAVItem
{
    NSString *_symbolicColorName;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000476a7
@property(retain, nonatomic) NSString *symbolicColorName; // @synthesize symbolicColorName=_symbolicColorName;
- (void)write:(id)arg1;	// IMP=0x0000000000047534
@property(retain, nonatomic) NSString *colorString;
- (void)parserFoundAttributes:(id)arg1;	// IMP=0x000000000004726a
- (id)init;	// IMP=0x0000000000047244

@end

