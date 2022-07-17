//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/NSCopying-Protocol.h>
#import <PhotoLibraryServices/PSISearchableTerm-Protocol.h>

@class NSString;

@interface PSISynonym : NSObject <NSCopying, PSISearchableTerm>
{
    NSString *_text;	// 8 = 0x8
    unsigned long long _category;	// 16 = 0x10
    unsigned long long _owningGroupId;	// 24 = 0x18
    NSString *_identifier;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000556992
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) unsigned long long owningGroupId; // @synthesize owningGroupId=_owningGroupId;
@property(readonly, nonatomic) unsigned long long category; // @synthesize category=_category;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
- (id)description;	// IMP=0x0000000000556928
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000556861
- (unsigned long long)hash;	// IMP=0x000000000055680a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005567ff
- (id)initWithText:(id)arg1 category:(unsigned long long)arg2 owningGroupId:(unsigned long long)arg3 identifier:(id)arg4;	// IMP=0x0000000000556734

@end
