//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, TSKAnnotationAuthor;

@interface TSWPChangeSession
{
    unsigned int _sessionUID;	// 8 = 0x8
    TSKAnnotationAuthor *_author;	// 16 = 0x10
    NSDate *_date;	// 24 = 0x18
}

- (_Bool)isEqualToSession:(id)arg1;	// IMP=0x0000000000314017
- (void)dealloc;	// IMP=0x0000000000313fbf
@property(retain, nonatomic) NSDate *date;
@property(retain, nonatomic) TSKAnnotationAuthor *author;
@property(nonatomic) unsigned int sessionUID;

@end
