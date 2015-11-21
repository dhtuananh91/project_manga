//
//  ADCatalogViewCell.m
//  Manga-ka
//
//  Created by Anh Dang on 11/20/15.
//  Copyright © 2015 Anh Dang. All rights reserved.
//

#import "ADCatalogViewCell.h"

@implementation ADCatalogViewCell
- (void)relayout {
    self.mangaTitle.numberOfLines = 0;
    [self.mangaTitle sizeToFit];
}
@end
